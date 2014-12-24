<?php
/**
 * @file Template file for homepage services block
 */
?>
<style>
@media (max-width: 767px) {
    .google-maps {
        position: relative;
        padding-bottom: 56.25%;
        padding-top: 25px;
        height: 300px;
    }
    .google-maps:after{
      display: none;
    }
    .google-maps iframe {
        position: absolute;
        top: 0;
        left: 0;
        width: 100% !important;
        height: 100% !important;
    }
  }
  .google-maps iframe {
        width: 100% !important;
    }
</style>

<div class="google-maps">
    <iframe src="https://www.google.com/maps/embed?pb=!1m14!1m8!1m3!1d3888.316407039298!2d77.69960499999999!3d12.951594!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x3bae1235324be2ff%3A0xdba2f579ab3e1890!2sInnovative+Multiplex+Bus+Stop!5e0!3m2!1sen!2sin!4v1419425473974" width="1107" height="300" frameborder="0" style="border:0"></iframe>
</div>
