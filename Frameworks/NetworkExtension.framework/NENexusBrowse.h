/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NENexusBrowse : NSObject {
    NSUUID * _clientIdentifier;
    NWBrowseDescriptor * _descriptor;
    NWParameters * _parameters;
}

@property (nonatomic, retain) NSUUID *clientIdentifier;
@property (nonatomic, retain) NWBrowseDescriptor *descriptor;
@property (nonatomic, retain) NWParameters *parameters;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)descriptor;
- (id)parameters;
- (void)setClientIdentifier:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setParameters:(id)arg1;

@end
