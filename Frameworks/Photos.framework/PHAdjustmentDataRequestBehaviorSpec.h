/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAdjustmentDataRequestBehaviorSpec : NSObject {
    bool  _networkAccessAllowed;
}

@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;

- (bool)isNetworkAccessAllowed;
- (void)setNetworkAccessAllowed:(bool)arg1;

@end
