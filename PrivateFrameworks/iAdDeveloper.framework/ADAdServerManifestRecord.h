/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface ADAdServerManifestRecord : NSObject {
    NSURL * _URL;
    double  _lastUpdate;
    NSDictionary * _manifest;
    NSString * _name;
    bool  _temporary;
    bool  _updateInProgress;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) double lastUpdate;
@property (nonatomic, retain) NSDictionary *manifest;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool temporary;
@property (nonatomic) bool updateInProgress;

- (id)URL;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (double)lastUpdate;
- (id)manifest;
- (id)name;
- (void)setLastUpdate:(double)arg1;
- (void)setManifest:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTemporary:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setUpdateInProgress:(bool)arg1;
- (bool)temporary;
- (bool)updateInProgress;

@end
