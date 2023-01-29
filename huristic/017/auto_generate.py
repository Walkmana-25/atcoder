import subprocess
import os
import sys
import time
from multiprocessing import Pool
path_path = "/home/yuuta/Desktop/atcoder/huristic/017/"
list_ans = []
def run(i):
        os.chdir(path_path)
        try:
            os.remove("./tools/out.txt")
        except Exception:
            pass
        time_start = time.perf_counter()
        sp_1 = subprocess.run (
            f"cat ./tools/in/{i} | ./a.out > ./tools/{i}out.txt",shell=True
        )
        time_end = time.perf_counter()
        time_num = time_end - time_start

        os.chdir("./tools")
        
        sp_2 = subprocess.run(
            ["cargo", "run", "--release", "--bin", "vis", f"./in/{i}", f"./{i}out.txt"],
            encoding="utf-8", 
            stdout = subprocess.PIPE,stderr = subprocess.PIPE,
            check=True
            )    
        
        score = int(sp_2.stdout.split()[-1]) # 大抵、標準出力の一番最後にスコアが出力される
            


        print(f"{i}\tScore:\t{score}\tTime:\t{time_num}")
        with open(f"./output/{i}",mode="w") as f:
            f.write(str(score))
            


def main():
    os.chdir(path_path)
    os.makedirs("./tools/output")
    path = "./tools/in"
    list_dir = os.listdir(path)
    score_num = 0
    list_dir.sort()
    p = Pool(os.cpu_count())
    
    for i in list_dir:
        p.apply_async(run, args=(i,))

    p.close()
    p.join()
    


    subprocess.check_output(f"trash-put {path_path}/tools/*txtout.txt",shell=True)

    for i in os.listdir("./tools/output"):
        with open(f"./tools/output/{i}") as f:
            list_ans.append(int(f.read()))
    for i in list_ans:
        score_num += i
    subprocess.check_output(f"trash-put {path_path}/tools/output",shell=True)

    print(f"Total Score:\t{score_num}")

if __name__ == "__main__":
    main()
            