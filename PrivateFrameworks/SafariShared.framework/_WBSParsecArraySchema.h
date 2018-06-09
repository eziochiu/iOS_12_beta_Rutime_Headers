/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface _WBSParsecArraySchema : WBSParsecSchema {
    WBSParsecSchema * _elementSchema;
}

@property (nonatomic, retain) WBSParsecSchema *elementSchema;

- (void).cxx_destruct;
- (bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(id /* block */)arg4;
- (id)elementSchema;
- (id)initWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(bool)arg3;
- (void)setElementSchema:(id)arg1;

@end
