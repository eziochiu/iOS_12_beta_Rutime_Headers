/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMEventListenerReference : NSObject {
    IMEventListener * _eventListener;
}

@property (nonatomic, readonly) IMEventListener *eventListener;

- (void).cxx_destruct;
- (id)eventListener;
- (id)initWithEventListener:(id)arg1;

@end
