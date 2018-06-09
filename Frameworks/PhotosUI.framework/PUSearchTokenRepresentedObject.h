/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchTokenRepresentedObject : NSObject <NSSecureCoding> {
    PSIQueryToken * _queryToken;
    NSString * _title;
}

@property (nonatomic, readonly) PSIQueryToken *queryToken;
@property (nonatomic, readonly) NSString *title;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 queryToken:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)queryToken;
- (id)title;

@end
