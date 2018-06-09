/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolArticleID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    double  _score;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)score;
- (void)setIdentifier:(id)arg1;
- (void)setScore:(double)arg1;

@end
