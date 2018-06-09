/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _fileProtection;
}

@property (nonatomic, copy) NSString *fileProtection;

+ (id)complete;
+ (id)completeUnlessOpen;
+ (id)completeUntilFirstUserAuthentication;
+ (id)none;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProtection;
- (bool)indicatesProtection;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setFileProtection:(id)arg1;

@end