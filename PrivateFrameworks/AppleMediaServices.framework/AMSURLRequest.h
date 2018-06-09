/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying> {
    AMSURLRequestProperties * _properties;
}

@property (nonatomic, retain) AMSURLRequestProperties *properties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequest:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
