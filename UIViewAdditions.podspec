Pod::Spec.new do |s|
  s.name = 'UIViewAdditions'
  s.version = '0.1.2'
  s.license = 'MIT'
  s.summary = 'Convenience methods for UIView, nicely bundled in a category.'
  s.homepage = 'http://code.google.com/p/ios-ntp/'
  s.author = { 'Josh Brown' => 'josh@roadfiresoftware.com' }
  s.source = { :git => 'git@github.com:caiguo37/UIViewAdditions.git' }
  s.ios.deployment_target = "4.3"
  s.source_files = 'UIViewAdditions/Classes/*.{h,m}'
  s.public_header_files = 'UIViewAdditions/Classes/*.h'
end
