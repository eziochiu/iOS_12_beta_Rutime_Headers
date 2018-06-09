/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugParameterHandlerUIUpdate : NSObject {
    unsigned int  _notificationFlags;
    int  _paramID;
}

+ (id)updateWithParamID:(int)arg1 notificationFlags:(unsigned int)arg2;

- (unsigned int)notificationFlags;
- (int)paramID;

@end
