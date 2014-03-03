Pod::Spec.new do |s|
  s.name         = 'Aniways'
  s.version      = '1.7'
  s.license = { :type => 'Commercial', :text => 'See http://www.aniways.com' }
  s.platform = :ios
  s.summary      = 'iOS framework for enriching IM clients'
  s.description  = 'iOS framework for enriching IM clients'
  s.homepage     = 'http://aniways.com'
  s.author = { 'Aniways' => 'support@aniways.com' }
  s.source = { :git => 'https://github.com/aniways/aniways-pod.git' }
  s.requires_arc = true
  s.frameworks = 'AdSupport', 'AVFoundation', 'CFNetwork', 'CoreGraphics', 'CoreLocation', 'CoreData', 'MobileCoreServices', 'QuartzCore', 'StoreKit', 'SystemConfiguration', 'CoreTelephony', 'UIKit', 'Foundation' 
  s.library = 'z'
  s.vendored_frameworks = 'Aniways.framework'
  s.resource = ['Resources/*.png', 'Resources/*.plist', 'Resources/*.m4a']
end
