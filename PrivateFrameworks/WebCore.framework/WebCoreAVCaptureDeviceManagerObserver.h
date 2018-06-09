/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {
    struct AVCaptureDeviceManager { int (**x1)(); struct HashMap<unsigned int, WTF::Function<void ()>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::Function<void ()> > >={HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::Function<void ()> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::Function<void ()> > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::Function<void ()>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::Function<void ()> > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> >=^{KeyValuePair<unsigned int, WTF::Function<void ()> > {} x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * m_callback;
}

- (void)deviceConnected:(id)arg1;
- (void)deviceDisconnected:(id)arg1;
- (void)disconnect;
- (id)initWithCallback:(struct AVCaptureDeviceManager { int (**x1)(); struct HashMap<unsigned int, WTF::Function<void ()>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::Function<void ()> > >={HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::Function<void ()> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::Function<void ()> > >, WTF::IntHash<unsigned int>, WTF::HashMap<unsigned int, WTF::Function<void ()>, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::Function<void ()> > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> >=^{KeyValuePair<unsigned int, WTF::Function<void ()> > {} x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1;

@end
