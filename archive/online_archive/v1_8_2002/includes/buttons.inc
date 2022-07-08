<SCRIPT LANGUAGE="JAVASCRIPT">
 <!--

  // Declare variables for buttons when they are off

  var archive_off = new Image(72,54);
  var current_off = new Image(72,54);
  var home_off = new Image(72,54);
  var howto_off = new Image(72,54);
  var links_off = new Image(72,54);
  var masthead_off = new Image(72,54);

  // Declare variables for buttons when they are on

  var archive_on = new Image(72,54);
  var current_on = new Image(72,54);
  var home_on = new Image(72,54);
  var howto_on = new Image(72,54);
  var links_on = new Image(72,54);
  var masthead_on = new Image(72,54);

  // Source the off variables

  archive_off.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/archive_off.gif";
  current_off.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/current_off.gif";
  home_off.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/home_off.gif";
  howto_off.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/howto_off.gif";
  links_off.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/links_off.gif";
  masthead_off.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/masthead_off.gif";

  // Source the on variables

  archive_on.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/archive_on.gif";
  current_on.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/current_on.gif";
  home_on.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/home_on.gif";
  howto_on.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/howto_on.gif";
  links_on.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/links_on.gif";
  masthead_on.src = "http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/masthead_on.gif";

  // Function to switch the images

  function changeimage(x, y)
  {
   window.document.images[x].src = y.src;
  }

 //-->
</SCRIPT>

<HR>
<BR>
<TABLE WIDTH="400" BORDER="0" CELLPADDING="0" CELLSPACING="0" ALIGN="CENTER">
<TR> 
<TD WIDTH="79"><A HREF="http://www.departments.bucknell.edu/stadler_center/how2/current/index.shtm" ONMOUSEOVER="changeimage('current_img', current_on); return true" ONMOUSEOUT="changeimage('current_img', current_off); return true" ALT="current issue" BORDER="0" WIDTH="72" HEIGHT="54"><IMG BORDER="0" SRC="http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/current_off.gif" NAME="current_img"></A></TD>
<TD WIDTH="79"><A HREF="http://www.scc.rutgers.edu/however" ONMOUSEOVER="changeimage('archive_img', archive_on); return true" ONMOUSEOUT="changeimage('archive_img', archive_off); return true" ALT="archive" BORDER="0" WIDTH="72" HEIGHT="54"><IMG BORDER="0" SRC="http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/archive_off.gif" NAME="archive_img"></A></TD>
<TD WIDTH="79"><A HREF="http://www.departments.bucknell.edu/stadler_center/how2/authors.shtm" ONMOUSEOVER="changeimage('masthead_img', masthead_on); return true" ONMOUSEOUT="changeimage('masthead_img', masthead_off); return true" ALT="authors & editors" BORDER="0" WIDTH="72" HEIGHT="54"><IMG BORDER="0" SRC="http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/masthead_off.gif" NAME="masthead_img"></A></TD>
<TD WIDTH="79"><A HREF="http://www.departments.bucknell.edu/stadler_center/how2/discuss.shtm" ONMOUSEOVER="changeimage('links_img', links_on); return true" ONMOUSEOUT="changeimage('links_img', links_off); return true" ALT="discussion" BORDER="0" WIDTH="72" HEIGHT="54"><IMG BORDER="0" SRC="http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/links_off.gif" NAME="links_img"></A></TD>
<TD WIDTH="79"><A HREF="http://www.departments.bucknell.edu/stadler_center/how2/announce.shtm" ONMOUSEOVER="changeimage('howto_img', howto_on); return true" ONMOUSEOUT="changeimage('howto_img', howto_off); return true" ALT="guidelines" BORDER="0" WIDTH="72" HEIGHT="54"><IMG BORDER="0" SRC="http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/howto_off.gif" NAME="howto_img"></A></TD>
<TD WIDTH="79"><A HREF="http://www.departments.bucknell.edu/stadler_center/how2/index.shtm" ONMOUSEOVER="changeimage('home_img', home_on); return true" ONMOUSEOUT="changeimage('home_img', home_off); return true" ALT="home" BORDER="0" WIDTH="72" HEIGHT="54"><IMG BORDER="0" SRC="http://www.departments.bucknell.edu/stadler_center/how2/graphics/nav/home_off.gif" NAME="home_img"></A></TD>
 </TR>
 </TABLE>
