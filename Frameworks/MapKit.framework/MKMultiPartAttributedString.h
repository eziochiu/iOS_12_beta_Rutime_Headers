/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMultiPartAttributedString : NSObject <NSCopying> {
    NSAttributedString * _attributedString;
    NSArray * _components;
    NSArray * _separators;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly, copy) NSArray *components;
@property (nonatomic, readonly, copy) NSArray *separators;

+ (id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2;
+ (id)multiPartAttributedStringWithString:(id)arg1;

- (void).cxx_destruct;
- (id)attributedString;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithComponents:(id)arg1 separators:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)separators;

@end
