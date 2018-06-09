/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSiriSearchRequest : NSObject <NSSecureCoding> {
    NSArray * _queryTokens;
}

@property (nonatomic, readonly) NSArray *queryTokens;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchForPhotosIntent:(id)arg1;
- (id)queryTokens;

@end
