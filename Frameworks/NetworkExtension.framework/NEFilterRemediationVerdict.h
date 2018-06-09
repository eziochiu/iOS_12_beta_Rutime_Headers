/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterRemediationVerdict : NEFilterVerdict <NSCopying, NSSecureCoding>

+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)needRulesVerdict;

@end
