/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTPowerAssertion : NSObject {
    unsigned int  _assertion;
    NSString * _identifier;
    NSArray * _stack;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end
