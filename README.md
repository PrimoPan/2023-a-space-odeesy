# 2023-a-space-odeesy
## A digital media art work by PrimoPan and Teki Han from CUC-Anima

## 答辩

### Part 1  
  总体通过一个C++工程调度 可以并行调用shell命令和Python脚本
  
  Dos界面聊天室 
  
  用户键盘输入 与"AI Robot“进行交流
  
  在某几个关键时间点 捕捉用户照片 和一段挥手的视频
  
  在聊天室进程进行途中，后台并行调用一些图像处理的Python脚本
  
### Part 2
  突然黑屏，灯光熄灭
  
  通过OpenCV将预剪辑视频和刚刚处理完的视频进行拼接
  
  已有成品Demo
  
  介于OpenCV的音频处理目前调试的比较糟糕，最后声音内容可能需要直接播放mp3文件，即OpenCV不涉及音频处理，通过计算时间拼接视频与声音作品卡点
  
### 灯光方面
  灯光的闪烁会和视频中的频闪相对接
  
  目前用Arduino和LED灯带效果较为糟糕
  
  后续如需完善，会和戏剧影视学院光环境同学的同学进行联合创作
