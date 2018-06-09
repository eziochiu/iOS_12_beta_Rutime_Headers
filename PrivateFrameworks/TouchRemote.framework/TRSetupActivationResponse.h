/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupActivationResponse : TRResponseMessage {
    bool  _activated;
}

@property (nonatomic) bool activated;

+ (bool)supportsSecureCoding;

- (bool)activated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActivated:(bool)arg1;

@end
