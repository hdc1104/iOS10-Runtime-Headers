/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSArray, NSString, NSObject<OS_dispatch_queue>, NSXPCConnection, <ACDAccountStoreProtocol>;

@interface ACAccountStore : NSObject  {
    NSXPCConnection *_connection;
    NSString *_clientBundleID;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _shouldSendClientState;
    BOOL _notificationsEnabled;
    id _daemonAccountStoreDidChangeObserver;
    <ACDAccountStoreProtocol> *_remoteAccountStore;
}

@property(readonly) NSArray * accounts;
@property(readonly) NSString * effectiveBundleID;
@property(retain) <ACDAccountStoreProtocol> * remoteAccountStore;

+ (BOOL)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;
+ (int)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;

- (void)setRemoteAccountStore:(id)arg1;
- (id)remoteAccountStore;
- (id)effectiveBundleID;
- (BOOL)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)clientTokenForAccount:(id)arg1;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(id)arg2;
- (BOOL)isPushSupportedForAccount:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (BOOL)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (BOOL)hasAccountWithDescription:(id)arg1;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (BOOL)permissionForAccountType:(id)arg1;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)credentialForAccount:(id)arg1;
- (id)allDataclasses;
- (id)allAccountTypes;
- (void)promptForWebLoginForAccount:(id)arg1 atURL:(id)arg2 callbackURL:(id)arg3 force:(BOOL)arg4 reason:(id)arg5 completion:(id)arg6;
- (void)renewCredentialsForAccount:(id)arg1 completion:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(BOOL)arg3 completion:(id)arg4;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)accountsWithAccountType:(id)arg1 completion:(id)arg2;
- (id)accountsWithAccountType:(id)arg1;
- (id)accounts;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(id)arg2;
- (id)accountWithIdentifier:(id)arg1;
- (id)initWithEffectiveBundleID:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)credentialForAccount:(id)arg1 error:(id*)arg2;
- (void)renewCredentialsForAccount:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(id)arg4;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (void)_saveAccount:(id)arg1 verify:(BOOL)arg2 dataclassActions:(id)arg3 completion:(id)arg4;
- (id)_remoteAccountStore;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(id)arg4;
- (void)handleURL:(id)arg1;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(id)arg3;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(id)arg3;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(id)arg2;
- (void)disconnectFromRemoteAccountStore;
- (void)_connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)accountWithAppleID:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(id)arg2;
- (void)aa_lookupEmailAddresses:(id)arg1 withAppleAccount:(id)arg2 completion:(id)arg3;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(id)arg2;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_appleAccounts;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(id)arg2;
- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(id)arg2;
- (id)aa_appleAccountType;
- (id)aa_primaryAppleAccount;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accountsEnabledForDADataclasses:(int)arg1;
- (id)da_accounts;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2 withCompletion:(id)arg3;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(id)arg2;
- (void)da_loadDAAccountsEnabledForDADataclasses:(int)arg1 withCompletion:(id)arg2;
- (void)da_loadDAAccountsWithCompletion:(id)arg1;
- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(int)arg2 filterOnDataclasses:(BOOL)arg3 withCompletion:(id)arg4;

@end
