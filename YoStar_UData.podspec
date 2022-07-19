#
# Be sure to run `pod lib lint YoStar_UData.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YoStar_UData'
  s.version          = '0.0.1'
  s.summary          = 'A short description of YoStar_UData.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/XYKings/Yostar_udata'
  s.license           = { :type => 'MIT', :text => <<-LICENSE 
  Copyright 2012 Permission is granted to... 
  LICENSE
  }
  s.author           = { 'Yx' => 'ye.xue@yo-star.com' }
  s.source           = { :git => 'https://github.com/XYKings/Yostar_udata.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.requires_arc = true

  s.platform     = :ios, '9.0'

  s.vendored_frameworks = 'YoStar_UData/**/*.framework'
  
  s.frameworks = 'CoreMotion', 'Security', 'SystemConfiguration', 'CoreTelephony', 'CoreLocation', 'WebKit'

  s.weak_frameworks = 'AppTrackingTransparency', 'AdServices', 'AdSupport'

  s.libraries = 'c++', 'sqlite3.0', 'resolv', 'z'

  s.xcconfig = { 'OTHER_LDFLAGS' => ['-ObjC', '-all_load'] }
end
