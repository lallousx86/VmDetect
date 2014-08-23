using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using COM.Tools.VMDetect;
namespace CSharpTest
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class Form1 : System.Windows.Forms.Form
	{
		internal System.Windows.Forms.GroupBox GroupBox1;
		internal System.Windows.Forms.PictureBox PictureBox2;
		internal System.Windows.Forms.Button Button1;
		internal System.Windows.Forms.PictureBox PictureBox1;
		internal System.Windows.Forms.Button Button2;
		internal System.Windows.Forms.Button button3;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public Form1()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if(components != null)
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
			System.Resources.ResourceManager resources = new System.Resources.ResourceManager(typeof(Form1));
			this.GroupBox1 = new System.Windows.Forms.GroupBox();
			this.button3 = new System.Windows.Forms.Button();
			this.PictureBox2 = new System.Windows.Forms.PictureBox();
			this.Button1 = new System.Windows.Forms.Button();
			this.PictureBox1 = new System.Windows.Forms.PictureBox();
			this.Button2 = new System.Windows.Forms.Button();
			this.GroupBox1.SuspendLayout();
			this.SuspendLayout();
			// 
			// GroupBox1
			// 
			this.GroupBox1.Controls.Add(this.button3);
			this.GroupBox1.Controls.Add(this.PictureBox2);
			this.GroupBox1.Controls.Add(this.Button1);
			this.GroupBox1.Controls.Add(this.PictureBox1);
			this.GroupBox1.Location = new System.Drawing.Point(16, 11);
			this.GroupBox1.Name = "GroupBox1";
			this.GroupBox1.Size = new System.Drawing.Size(280, 96);
			this.GroupBox1.TabIndex = 5;
			this.GroupBox1.TabStop = false;
			this.GroupBox1.Text = "Am I running inside a virtual machine";
			// 
			// button3
			// 
			this.button3.Location = new System.Drawing.Point(168, 64);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(72, 23);
			this.button3.TabIndex = 4;
			this.button3.Text = "VM Ware?";
			this.button3.Click += new System.EventHandler(this.button3_Click);
			// 
			// PictureBox2
			// 
			this.PictureBox2.Image = ((System.Drawing.Image)(resources.GetObject("PictureBox2.Image")));
			this.PictureBox2.Location = new System.Drawing.Point(184, 24);
			this.PictureBox2.Name = "PictureBox2";
			this.PictureBox2.Size = new System.Drawing.Size(32, 32);
			this.PictureBox2.TabIndex = 3;
			this.PictureBox2.TabStop = false;
			// 
			// Button1
			// 
			this.Button1.Location = new System.Drawing.Point(32, 64);
			this.Button1.Name = "Button1";
			this.Button1.Size = new System.Drawing.Size(72, 23);
			this.Button1.TabIndex = 0;
			this.Button1.Text = "Virtual PC?";
			this.Button1.Click += new System.EventHandler(this.Button1_Click);
			// 
			// PictureBox1
			// 
			this.PictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("PictureBox1.Image")));
			this.PictureBox1.Location = new System.Drawing.Point(48, 24);
			this.PictureBox1.Name = "PictureBox1";
			this.PictureBox1.Size = new System.Drawing.Size(32, 32);
			this.PictureBox1.TabIndex = 2;
			this.PictureBox1.TabStop = false;
			// 
			// Button2
			// 
			this.Button2.Location = new System.Drawing.Point(184, 75);
			this.Button2.Name = "Button2";
			this.Button2.Size = new System.Drawing.Size(72, 23);
			this.Button2.TabIndex = 4;
			this.Button2.Text = "VM Ware?";
			// 
			// Form1
			// 
			this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
			this.ClientSize = new System.Drawing.Size(312, 118);
			this.Controls.Add(this.GroupBox1);
			this.Controls.Add(this.Button2);
			this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
			this.MaximizeBox = false;
			this.MinimizeBox = false;
			this.Name = "Form1";
			this.Text = "VMDetect C# test";
			this.GroupBox1.ResumeLayout(false);
			this.ResumeLayout(false);

		}
		#endregion
		[STAThread]
		static void Main() 
		{
			Application.Run(new Form1());
		}

		private void Button1_Click(object sender, System.EventArgs e)
		{
			if (VMDetect.IsInsideVPC)
		      MessageBox.Show("Running inside Virtual PC!","Info",MessageBoxButtons.OK,MessageBoxIcon.Information);
			else
              MessageBox.Show("Not running inside Virtual PC!","Info",MessageBoxButtons.OK,MessageBoxIcon.Error);
		}

		private void button3_Click(object sender, System.EventArgs e)
		{
			if (VMDetect.IsInsideVMWare)
  				MessageBox.Show("Running inside VMWare!","Info",MessageBoxButtons.OK,MessageBoxIcon.Information);
			else
				MessageBox.Show("Not running inside VMWare!","Info",MessageBoxButtons.OK,MessageBoxIcon.Error);
		}
	}
}
