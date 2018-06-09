/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKArchivedAnchoredPackage : NSObject <NSSecureCoding> {
    NSString * _UUID;
    NSString * _anchorPath;
    NSString * _packagePath;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSString *anchorPath;
@property (nonatomic, retain) NSString *packagePath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)anchorPath;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)packagePath;
- (void)setAnchorPath:(id)arg1;
- (void)setPackagePath:(id)arg1;
- (void)setUUID:(id)arg1;

@end
