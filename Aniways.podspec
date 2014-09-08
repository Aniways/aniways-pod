Pod::Spec.new do |s|

  s.name         = "Aniways"
  s.version      = "2.3"
  s.summary      = "Beautiful messaging monetization."

  s.description  = <<-DESC
                   iOS framework for enriching IM clients

                   * Better user engagement, higher retention rates.
                   * Monetizing chat in a whole new way. 
                   * Spice up your chat with an ever-changing list of emoticons.
                   * Super easy plug & play installation. 
                   DESC

  s.homepage      = "http://www.aniways.com"
  s.license       = { :type => 'Commercial', :text => 'See http://www.aniways.com' }
  s.author        = { 'Aniways' => 'support@aniways.com' }
  
   s.platform     = :ios, '6.0'

  s.source = { :git => 'https://github.com/aniways/aniways-pod.git', :tag => "2.3"}
  
  s.resource = ['Resources/*.png', 'Resources/*.plist', 'Resources/*.m4a']

  s.frameworks = 'Accelerate', 'AVFoundation', 'CFNetwork', 'CoreGraphics', 'CoreLocation', 'CoreData', 'MobileCoreServices', 'QuartzCore', 'StoreKit', 'SystemConfiguration', 'CoreTelephony', 'UIKit', 'Foundation', 'Security' 
  
  s.library = 'z'

  s.requires_arc = true
  s.vendored_frameworks = 'Aniways.framework'

end
