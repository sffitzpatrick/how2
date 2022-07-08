$(document).ready(function(){
	$(".poemscontainer div.poemdiv").addClass("initialized").hide();
	$(".toplinks a").css({opacity: 0.6});
	
	$(".toplinks a").mouseover(function(){
		$(this).stop().animate({opacity: 1});
	});$(".toplinks a").mouseout(function(){
		$(this).stop().animate({opacity: 0.6});
	});
	
	
	
	$("a#poem1").click(function(){
		if ($("#div1").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div1").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div1").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div1").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem2").click(function(){
		if ($("#div2").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div2").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div2").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div2").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem3").click(function(){
		if ($("#div3").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div3").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div3").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div3").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem4").click(function(){
		if ($("#div4").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div4").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div4").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div4").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem5").click(function(){
		if ($("#div5").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div5").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div5").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div5").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem6").click(function(){
		if ($("#div6").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div6").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div6").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div6").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem7").click(function(){
		if ($("#div7").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div7").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div7").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div7").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem8").click(function(){
		if ($("#div8").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div8").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div8").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div8").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem9").click(function(){
		if ($("#div9").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div9").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div9").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div9").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem10").click(function(){
		if ($("#div10").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div10").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div10").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div10").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	$("a#poem11").click(function(){
		if ($("#div11").hasClass("initialized")){
			$(".initialized").removeClass("initialized");
			$("#div11").addClass("displayed").fadeIn("slow");	
		}
		if(!$("#div11").hasClass("displayed")){
			$(".displayed").removeClass("displayed").fadeOut("fast", function(){
			$("#div11").addClass("displayed").fadeIn("slow");		
		});
		} 
	});
	
	
});