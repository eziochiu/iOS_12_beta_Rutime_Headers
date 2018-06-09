/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleMediaQuery : NSObject <NSCopying> {
    NSDictionary * _featureValues;
    NSString * _identifier;
    bool  _isNegated;
    NSString * _mediaType;
}

@property (nonatomic, readonly, retain) NSDictionary *featureValues;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isNegated;
@property (nonatomic, readonly, retain) NSString *mediaType;

+ (id)mediaQueryListWithCSSMediaQuery:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)featureValues;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isNegated;
- (id)mediaType;

@end
