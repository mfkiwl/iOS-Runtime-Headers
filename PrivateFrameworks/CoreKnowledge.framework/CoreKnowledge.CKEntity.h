/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKEntity : NSObject {
    void identifier;
    void store;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) int hash;
@property (nonatomic, readonly) int hashValue;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _TtC13CoreKnowledge16CKKnowledgeStore *store;

- (id /* block */).cxx_destruct;
- (id)description;
- (int)hash;
- (/* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*)hashValue;
- (long)identifier:(void *)arg1; // needs 1 arg types, found 5: /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short
- (id)init;
- (id)initWithIdentifier:(id)arg1 knowledgeStore:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)linkTo:(id)arg1 withPredicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)linkTo:(id)arg1 withPredicate:(id)arg2 error:(id*)arg3;
- (void)linksTo:(id)arg1 matchType:(int)arg2 completionHandler:(id /* block */)arg3;
- (id)linksTo:(id)arg1 matchType:(int)arg2 error:(id*)arg3;
/* MISSING HEADER DESCRIPTION FOR METHOD objectForKeyedSubscript: */
- (BOOL)removeObjectForKey:(id)arg1 error:(id*)arg2;
/* MISSING HEADER DESCRIPTION FOR METHOD setObject:forKeyedSubscript: */
- (id)store;
- (void)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(BOOL)arg3 error:(id*)arg4;

@end