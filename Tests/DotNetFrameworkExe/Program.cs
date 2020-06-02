using System;
using System.Collections.Generic;
using System.Windows.Forms;
using System.Diagnostics;
using System.ComponentModel;

namespace DotNetFrameworkExe
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Process currentProcess = Process.GetCurrentProcess();
            Console.Out.WriteLine("Current PID: " + currentProcess.Id);
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
            var result = MessageBox.Show("test", ".NET framework EXE",
                     MessageBoxButtons.YesNo,
                     MessageBoxIcon.Question);
        }
    }
}
