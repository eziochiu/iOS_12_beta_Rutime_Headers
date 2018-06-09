/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCentral : CBPeer

@property (nonatomic, readonly) unsigned long long maximumUpdateValueLength;

- (id)description;
- (unsigned long long)maximumUpdateValueLength;

@end
