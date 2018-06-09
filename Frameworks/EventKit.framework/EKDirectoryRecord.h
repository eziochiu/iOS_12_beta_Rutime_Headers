/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectoryRecord : NSObject {
    NSString * _displayName;
    NSString * _preferredAddress;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *preferredAddress;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)preferredAddress;
- (void)setDisplayName:(id)arg1;
- (void)setPreferredAddress:(id)arg1;

@end
