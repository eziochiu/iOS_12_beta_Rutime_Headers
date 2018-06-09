/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFWebKitMainThread : NSObject {
    struct __CFDictionary { } * _visibleDict;
    MFLock * _visibleDictLock;
}

+ (id)sharedInstance;

- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (void)dealloc;
- (int)dictValueForMimeType:(id)arg1;
- (id)init;

@end
