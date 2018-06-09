/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelGenericObjectKind : MPModelKind {
    NSDictionary * _relationshipKinds;
}

@property (nonatomic, readonly) NSDictionary *relationshipKinds;

+ (id)kindWithRelationshipKinds:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)relationshipKinds;

@end
