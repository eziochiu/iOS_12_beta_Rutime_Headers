/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBuildASMConfigurationResultObject : CATTaskResultObject {
    NSDictionary * _asmConfiguration;
}

@property (nonatomic, copy) NSDictionary *asmConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asmConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAsmConfiguration:(id)arg1;

@end
