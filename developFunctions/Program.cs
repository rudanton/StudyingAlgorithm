using System;
using System.Collections.Generic;
using System.Text;

namespace developFunctions
{
    public class Solution
    {
        public int[] solution(int[] progresses, int[] speeds)
        {
            Queue<int> qsol = new Queue<int>();
            int size = progresses.Length;
            bool[] isCompleted = new bool[size];
            List<int> answerList = new List<int>();
            int count = 0;
            int index = 0;
            foreach (int i in progresses)
            {
                qsol.Enqueue(i);
            }
            while (qsol.Count > 0)
            {
                if (qsol.Peek() >= 100)
                {
                    qsol.Dequeue();
                    count++;
                    isCompleted[index] = true;
                    index++;
                    continue;
                }
                if(count>0) answerList.Add(count);
                count = 0;
                for (int i = 0; i < size; i++)
                {
                    if (isCompleted[i]) continue;

                    qsol.Dequeue();
                    progresses[i] += speeds[i];
                    //Console.Write(progresses[i] + " ");
                    qsol.Enqueue(progresses[i]);
                }
                    Console.Write("\t"+qsol.Count);
                Console.WriteLine();
            }
            answerList.Add(count);
            int[] answer = answerList.ToArray();
            return answer;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int[] a = { 95, 90, 99, 99, 80, 99 };
            int[] ans = s.solution(a, new int[] { 1, 1, 1, 1, 1, 1 });
            foreach(int i in ans)
            {
                Console.WriteLine(i);
            }
        }
    }
}
