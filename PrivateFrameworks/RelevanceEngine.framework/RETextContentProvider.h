/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RETextContentProvider : NSObject <NSCoding, NSCopying, REContentEncodable>

@property (nonatomic, readonly) NSString *contentEncodedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contentProviderFromAttributedString:(id)arg1;
+ (id)contentProviderFromClockKitTextProvider:(id)arg1;

- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)contentEncodedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
