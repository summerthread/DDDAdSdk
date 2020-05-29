#
# Be sure to run `pod lib lint DDDAdSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'DDDAdSdk'
  s.version          = '1.0.0'
  s.summary          = 'adSdk 广告sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/summerthread/DDDAdSdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'summerthread' => 'summerthread@163.com' }
  s.source           = { :git => 'https://github.com/summerthread/DDDAdSdk.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

#  s.source_files = 'DDDAdSdk/Classes/**/*.h' #工程需要引入的文件
#  s.public_header_files = "DDDAdSdk/Classes/**/*.h"  #工程需要暴露出来的头文件
  
  # 是否使用静态库。如果podfile指明了use_frameworks!命令，但是pod仓库需要使用静态库则需要设置
  s.static_framework = true
  s.requires_arc = true
#  s.resource_bundles = {
#      'BUAdSDK' => ['DDDAdSdk/Assets/BUAdSDK.bundle'],
#      'DyAdSdk' => ['DDDAdSdk/Assets/DyAdSdk.bundle']
#  }
  s.resource = 'DDDAdSdk/Assets/BUAdSDK.bundle'
  s.xcconfig         = { 'OTHER_LDFLAGS' => '-ObjC'}
  
  #s.frameworks = "ImageIO"  #工程依赖的framework
  s.vendored_frameworks = 'DDDAdSdk/Classes/DDDAdSdk.framework' #工程依赖的第三方framework
  s.libraries = "c++", "resolv.9", "sqlite3", "z" #工程依赖的library  需要移除静态库的lib
  
  # s.public_header_files = 'Pod/Classes/**/*.h'
   s.frameworks = 'Accelerate', 'AdSupport', 'AVFoundation', 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony', 'MediaPlayer', 'MobileCoreServices', 'StoreKit', 'SystemConfiguration', 'WebKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  
   s.dependency 'AFNetworking', '~> 4.0.1'
  
  
end
