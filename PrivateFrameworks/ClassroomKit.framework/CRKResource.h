/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKResource : NSObject <NSSecureCoding> {
    NSURL * _hostedURL;
    bool  _zippedBundle;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSURL *hostedURL;
@property (getter=isZippedBundle, nonatomic) bool zippedBundle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostedURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHostedURL:(id)arg1 isZippedBundle:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHostedResource:(id)arg1;
- (bool)isZippedBundle;
- (void)setHostedURL:(id)arg1;
- (void)setZippedBundle:(bool)arg1;

@end
