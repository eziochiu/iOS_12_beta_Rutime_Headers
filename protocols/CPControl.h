/* made by EzioChiu.
 */

@protocol CPControl <NSObject>

@required

- (void)handlePrimaryAction;
- (NSUUID *)identifier;
- (void)setIdentifier:(NSUUID *)arg1;

@end
