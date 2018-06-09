/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONFontAttributes : SXJSONObject <SXFontAttributes>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) long long width;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)styleWithValue:(id)arg1 withType:(int)arg2;
- (long long)weightWithValue:(id)arg1 withType:(int)arg2;
- (long long)widthWithValue:(id)arg1 withType:(int)arg2;

@end
