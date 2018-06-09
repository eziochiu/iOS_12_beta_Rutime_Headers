/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFileSourceDefinition : NUSingleSourceDefinition {
    NSURL * _url;
    NSString * _uti;
}

@property (readonly) NSURL *url;
@property (readonly) NSString *uti;

- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (id)url;
- (id)uti;

@end
