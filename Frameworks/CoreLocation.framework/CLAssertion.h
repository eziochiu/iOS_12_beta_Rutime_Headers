/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLAssertion : NSObject {
    struct CLAssertionInternal { id x1; struct CLConnectionClient {} x2; } * _internal;
}

- (void)dealloc;
- (id)initWithRegistrationMessageName:(const char *)arg1 messageDictionary:(id)arg2;
- (void)invalidate;

@end
