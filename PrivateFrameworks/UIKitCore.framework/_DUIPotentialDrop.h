/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIPotentialDrop : NSObject <NSCopying, NSSecureCoding> {
    bool  _forbidden;
    unsigned long long  _operation;
    bool  _precise;
    bool  _prefersFullSizePreview;
}

@property (nonatomic) bool forbidden;
@property (nonatomic) unsigned long long operation;
@property (nonatomic) bool precise;
@property (nonatomic) bool prefersFullSizePreview;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forbidden;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operation;
- (bool)precise;
- (bool)prefersFullSizePreview;
- (void)setForbidden:(bool)arg1;
- (void)setOperation:(unsigned long long)arg1;
- (void)setPrecise:(bool)arg1;
- (void)setPrefersFullSizePreview:(bool)arg1;

@end
