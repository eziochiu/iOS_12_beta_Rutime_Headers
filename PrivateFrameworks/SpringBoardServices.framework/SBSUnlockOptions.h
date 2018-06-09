/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSUnlockOptions : NSObject <BSXPCCoding> {
    bool  _aboveOtherContexts;
}

@property (setter=_setAboveOtherContexts:, nonatomic) bool _aboveOtherContexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_aboveOtherContexts;
- (void)_setAboveOtherContexts:(bool)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
