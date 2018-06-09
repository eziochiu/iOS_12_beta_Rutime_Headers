/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallGroup : NSObject {
    NSArray * _calls;
}

@property (nonatomic, readonly, copy) NSArray *calls;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) int status;

- (void).cxx_destruct;
- (id)calls;
- (id)description;
- (id)displayName;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCall:(id)arg1;
- (id)initWithCalls:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCallGroup:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)status;

@end
