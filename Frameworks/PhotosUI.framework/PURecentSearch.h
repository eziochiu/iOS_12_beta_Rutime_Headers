/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURecentSearch : NSObject <NSSecureCoding> {
    NSArray * _representedObjects;
}

@property (nonatomic, readonly) NSArray *representedObjects;
@property (nonatomic, readonly) NSString *title;

+ (bool)_isSupportedRepresentedObjects:(id)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentedObjects:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)representedObjects;
- (id)title;

@end
