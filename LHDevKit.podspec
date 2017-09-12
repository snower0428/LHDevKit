#
# Be sure to run `pod lib lint LHDevKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LHDevKit'
  s.version          = '0.0.2'
  s.summary          = 'develop kit for ios.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!
  s.description      = 'this kit contain some useful code for developer ios app.'

  s.homepage         = 'https://github.com/snower0428/LHDevKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = 'MIT'
  s.author           = { 'leihui' => 'leihui@felink.com' }
  s.source           = { :git => "https://github.com/snower0428/LHDevKit.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.default_subspec = 'Core'

	s.subspec 'Core' do |ss|
	  ss.source_files = 'LHDevKit/Classes/Core/**/*'
	  ss.dependency 'GBDeviceInfo', '~> 4.0'
	end

#  s.source_files = 'LHDevKit/Classes/**/*'
#  s.resource_bundles = {
#   'LHDevKit' => ['LHDevKit/Assets/*.png']
#  }

  # s.vendored_frameworks = 'MyFramework.framework', 'TheirFramework.framework'
  # s.prefix_header_contents = '#import <UIKit/UIKit.h>', '#import <Foundation/Foundation.h>'
  # s.prefix_header_file = 'iphone/include/prefix.pch'

  # s.public_header_files = 'LHDevKit/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.library = 'z'
  # s.dependency 'AFNetworking', '~> 2.3'
end
