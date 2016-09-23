#ifndef __WINDOW_H_
#define __WINDOW_H_

#include <GL\glew.h>		//requires GLEW_STATIC preprocessor flag, include before GLFW
#include <GLFW\glfw3.h>
#include <iostream>

namespace MASCHINE { namespace graphics {

	class Window
	{
	private:
		const char *m_Title;
		int m_Width, m_Height;
		GLFWwindow *m_Window;
		bool m_Closed;
	public:
		Window(const char *title, int width, int height);
		~Window();
		bool closed() const;
		void update();
		void clear() const;

		inline int getWidth() const { return m_Width; }
		inline int getHeight() const { return m_Height; }
	private:
		bool init();
	};

} }

#endif // !__WINDOW_H_

