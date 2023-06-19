# Animation-on-C-
Write a program that displays some drawing on the screen, and then redraws it at not too long intervals, creating an animation effect. At
least two logically complete figures must be displayed on the screen. It is advisable to use models of real-world objects as figures: hedgehogs, Christmas trees, mills, etc., but you can also use abstract compositions of geometric
shapes.
Requirements:
1. The drawing can be constructed using pseudographics, FLTK or Xlib.
2. The program should define an abstract class "shape" containing purely virtual functions "draw" and "move". All objects that will draw something should replace these
functions with their own options.
3. Each figure (herringbone, mill, etc.) must be represented by an object of a class derived from the class
"figure". Each shape must store its coordinates and the sub-figures it consists of. So,
for example, a Christmas tree should store its coordinates and its constituent objects-triangles and an object-a rectangle. The "scene" class should store all logically completed figures present on
the screen (but not their sub-figures). Shapes should be stored by storing an array of pointers
to objects of the base class "shape".
4. It is assumed that each figure and sub-figure has its own coordinate system associated with it. We assume
that all coordinate systems are connected to each other by a parallel transfer. Each figure as
its coordinates must store the coordinates of the transfer vector of its coordinate system relative
to the higher coordinate system. For example, the coordinates of a Christmas tree mean a shift of its coordinate system
relative to the global coordinate system of the scene, and the coordinates of its constituent triangle mean a shift of its coordinate system relative to the coordinate system of the Christmas tree. Hint: when drawing
a figure, it should be transmitted the shift of the higher coordinate system relative to the scene and the place
where it needs to draw itself (output stream, intermediate matrix for drawing formation,
etc.).
5. During the animation, both the coordinate system of the figure relative to the scene and the coordinate system of its constituent subfigures relative to the coordinate system of the figure itself should move. For example,
along with the vertical movement of the Christmas tree as a whole, its constituent triangles make
small horizontal oscillations.
6. The program should be divided into modules, a makefile containing at least two goals should be supplied with the program: all — to assemble the executable file — and clean — to delete the executable file and
auxiliary object files.
