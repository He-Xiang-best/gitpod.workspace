package demo1;

import javax.swing.filechooser.FileSystemView;
import java.awt.*;
import java.io.File;

/**
 *@author hexiang
 *main函数，主程序体，实现文件管理器
 * */

public class FileManager {

	public static void main(String[] args) {
		// TODO 自动生成的方法存根
		EventQueue.invokeLater(new Runnable() {
			
			@Override
			public void run() {
				// TODO 自动生成的方法存根
				FileFrame frame=new FileFrame();
				
				//设置初始目录为系统默认
				FileSystemView rootview=FileSystemView.getFileSystemView();
				File root=rootview.getDefaultDirectory();
				frame.openFile(root.getPath());
				
				frame.setVisible(true);

			}
		});
		
	}

}
