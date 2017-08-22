#ifndef _MUTT_OPCODES_H
#define _MUTT_OPCODES_H 1

#include "config.h"

#ifdef _MAKEDOC
#include "doc/makedoc_defs.h"
#endif

#define OPS_CORE(_fmt) \
  _fmt(OP_NULL,                 "null operation") \
  _fmt(OP_END_COND,             "end of conditional execution (noop)") \
  _fmt(OP_ATTACH_VIEW_MAILCAP,  "force viewing of attachment using mailcap") \
  _fmt(OP_ATTACH_VIEW_TEXT,     "view attachment as text") \
  _fmt(OP_ATTACH_COLLAPSE,      "Toggle display of subparts") \
  _fmt(OP_BOTTOM_PAGE,          "move to the bottom of the page") \
  _fmt(OP_BOUNCE_MESSAGE,       "remail a message to another user") \
  _fmt(OP_BROWSER_GOTO_FOLDER,  "swap the current folder position with $folder if it exists") \
  _fmt(OP_BROWSER_NEW_FILE,     "select a new file in this directory") \
  _fmt(OP_BROWSER_VIEW_FILE,    "view file") \
  _fmt(OP_BROWSER_TELL,         "display the currently selected file's name") \
  _fmt(OP_BROWSER_SUBSCRIBE,    "subscribe to current mbox (IMAP/NNTP only)") \
  _fmt(OP_BROWSER_UNSUBSCRIBE,  "unsubscribe from current mbox (IMAP/NNTP only)") \
  _fmt(OP_BROWSER_TOGGLE_LSUB,  "toggle view all/subscribed mailboxes (IMAP only)") \
  _fmt(OP_BUFFY_LIST,           "list mailboxes with new mail") \
  _fmt(OP_CATCHUP,              "mark all articles in newsgroup as read") \
  _fmt(OP_CHANGE_DIRECTORY,     "change directories") \
  _fmt(OP_CHECK_NEW,            "check mailboxes for new mail") \
  _fmt(OP_COMPOSE_ATTACH_FILE,  "attach file(s) to this message") \
  _fmt(OP_COMPOSE_ATTACH_MESSAGE, "attach message(s) to this message") \
  _fmt(OP_COMPOSE_ATTACH_NEWS_MESSAGE, "attach news article(s) to this message") \
  _fmt(OP_COMPOSE_EDIT_BCC,     "edit the BCC list") \
  _fmt(OP_COMPOSE_EDIT_CC,      "edit the CC list") \
  _fmt(OP_COMPOSE_EDIT_DESCRIPTION, "edit attachment description") \
  _fmt(OP_COMPOSE_EDIT_ENCODING, "edit attachment transfer-encoding") \
  _fmt(OP_COMPOSE_EDIT_FCC,     "enter a file to save a copy of this message in") \
  _fmt(OP_COMPOSE_EDIT_FILE,    "edit the file to be attached") \
  _fmt(OP_COMPOSE_EDIT_FROM,    "edit the from field") \
  _fmt(OP_COMPOSE_EDIT_HEADERS, "edit the message with headers") \
  _fmt(OP_COMPOSE_EDIT_MESSAGE, "edit the message") \
  _fmt(OP_COMPOSE_EDIT_MIME,    "edit attachment using mailcap entry") \
  _fmt(OP_COMPOSE_EDIT_NEWSGROUPS, "edit the newsgroups list") \
  _fmt(OP_COMPOSE_EDIT_REPLY_TO, "edit the Reply-To field") \
  _fmt(OP_COMPOSE_EDIT_FOLLOWUP_TO, "edit the Followup-To field") \
  _fmt(OP_COMPOSE_EDIT_X_COMMENT_TO, "edit the X-Comment-To field") \
  _fmt(OP_COMPOSE_EDIT_SUBJECT, "edit the subject of this message") \
  _fmt(OP_COMPOSE_EDIT_TO,      "edit the TO list") \
  _fmt(OP_CREATE_MAILBOX,       "create a new mailbox (IMAP only)") \
  _fmt(OP_EDIT_TYPE,            "edit attachment content type") \
  _fmt(OP_COMPOSE_GET_ATTACHMENT, "get a temporary copy of an attachment") \
  _fmt(OP_COMPOSE_ISPELL, "run ispell on the message") \
  _fmt(OP_COMPOSE_NEW_MIME, "compose new attachment using mailcap entry") \
  _fmt(OP_COMPOSE_TOGGLE_RECODE, "toggle recoding of this attachment") \
  _fmt(OP_COMPOSE_POSTPONE_MESSAGE, "save this message to send later") \
  _fmt(OP_COMPOSE_RENAME_ATTACHMENT, "send attachment with a different name") \
  _fmt(OP_COMPOSE_RENAME_FILE, "rename/move an attached file") \
  _fmt(OP_COMPOSE_TO_SENDER, "compose a new message to the sender") \
  _fmt(OP_COMPOSE_SEND_MESSAGE, "send the message") \
  _fmt(OP_COMPOSE_TOGGLE_DISPOSITION, "toggle disposition between inline/attachment") \
  _fmt(OP_COMPOSE_TOGGLE_UNLINK, "toggle whether to delete file after sending it") \
  _fmt(OP_COMPOSE_UPDATE_ENCODING, "update an attachment's encoding info") \
  _fmt(OP_COMPOSE_WRITE_MESSAGE, "write the message to a folder") \
  _fmt(OP_COPY_MESSAGE, "copy a message to a file/mailbox") \
  _fmt(OP_CREATE_ALIAS, "create an alias from a message sender") \
  _fmt(OP_CURRENT_BOTTOM, "move entry to bottom of screen") \
  _fmt(OP_CURRENT_MIDDLE, "move entry to middle of screen") \
  _fmt(OP_CURRENT_TOP, "move entry to top of screen") \
  _fmt(OP_DECODE_COPY, "make decoded (text/plain) copy") \
  _fmt(OP_DECODE_SAVE, "make decoded copy (text/plain) and delete") \
  _fmt(OP_DELETE, "delete the current entry") \
  _fmt(OP_DELETE_MAILBOX, "delete the current mailbox (IMAP only)") \
  _fmt(OP_DELETE_SUBTHREAD, "delete all messages in subthread") \
  _fmt(OP_DELETE_THREAD, "delete all messages in thread") \
  _fmt(OP_DISPLAY_ADDRESS, "display full address of sender") \
  _fmt(OP_DISPLAY_HEADERS, "display message and toggle header weeding") \
  _fmt(OP_DISPLAY_MESSAGE, "display a message") \
  _fmt(OP_EDIT_LABEL, "add, change, or delete a message's label") \
  _fmt(OP_EDIT_MESSAGE, "edit the raw message") \
  _fmt(OP_EDITOR_BACKSPACE, "delete the char in front of the cursor") \
  _fmt(OP_EDITOR_BACKWARD_CHAR, "move the cursor one character to the left") \
  _fmt(OP_EDITOR_BACKWARD_WORD, "move the cursor to the beginning of the word") \
  _fmt(OP_EDITOR_BOL, "jump to the beginning of the line") \
  _fmt(OP_EDITOR_BUFFY_CYCLE, "cycle among incoming mailboxes") \
  _fmt(OP_EDITOR_COMPLETE, "complete filename or alias") \
  _fmt(OP_EDITOR_COMPLETE_QUERY, "complete address with query") \
  _fmt(OP_EDITOR_DELETE_CHAR, "delete the char under the cursor") \
  _fmt(OP_EDITOR_EOL, "jump to the end of the line") \
  _fmt(OP_EDITOR_FORWARD_CHAR, "move the cursor one character to the right") \
  _fmt(OP_EDITOR_FORWARD_WORD, "move the cursor to the end of the word") \
  _fmt(OP_EDITOR_HISTORY_DOWN, "scroll down through the history list") \
  _fmt(OP_EDITOR_HISTORY_UP, "scroll up through the history list") \
  _fmt(OP_EDITOR_KILL_EOL, "delete chars from cursor to end of line") \
  _fmt(OP_EDITOR_KILL_EOW, "delete chars from the cursor to the end of the word") \
  _fmt(OP_EDITOR_KILL_LINE, "delete all chars on the line") \
  _fmt(OP_EDITOR_KILL_WORD, "delete the word in front of the cursor") \
  _fmt(OP_EDITOR_QUOTE_CHAR, "quote the next typed key") \
  _fmt(OP_EDITOR_TRANSPOSE_CHARS, "transpose character under cursor with previous") \
  _fmt(OP_EDITOR_CAPITALIZE_WORD, "capitalize the word") \
  _fmt(OP_EDITOR_DOWNCASE_WORD, "convert the word to lower case") \
  _fmt(OP_EDITOR_UPCASE_WORD, "convert the word to upper case") \
  _fmt(OP_ENTER_COMMAND, "enter a muttrc command") \
  _fmt(OP_ENTER_MASK, "enter a file mask") \
  _fmt(OP_EXIT, "exit this menu") \
  _fmt(OP_FILTER, "filter attachment through a shell command") \
  _fmt(OP_FIRST_ENTRY, "move to the first entry") \
  _fmt(OP_FLAG_MESSAGE, "toggle a message's 'important' flag") \
  _fmt(OP_FOLLOWUP, "followup to newsgroup") \
  _fmt(OP_FORWARD_TO_GROUP, "forward to newsgroup") \
  _fmt(OP_FORWARD_MESSAGE, "forward a message with comments") \
  _fmt(OP_GENERIC_SELECT_ENTRY, "select the current entry") \
  _fmt(OP_GET_CHILDREN, "get all children of the current message") \
  _fmt(OP_GET_MESSAGE, "get message with Message-Id") \
  _fmt(OP_GET_PARENT, "get parent of the current message") \
  _fmt(OP_GROUP_REPLY, "reply to all recipients") \
  _fmt(OP_HALF_DOWN, "scroll down 1/2 page") \
  _fmt(OP_HALF_UP, "scroll up 1/2 page") \
  _fmt(OP_HELP, "this screen") \
  _fmt(OP_JUMP, "jump to an index number") \
  _fmt(OP_LAST_ENTRY, "move to the last entry") \
  _fmt(OP_LIST_REPLY, "reply to specified mailing list") \
  _fmt(OP_LOAD_ACTIVE, "load list of all newsgroups from NNTP server") \
  _fmt(OP_MACRO, "execute a macro") \
  _fmt(OP_MAIL, "compose a new mail message") \
  _fmt(OP_MAIN_BREAK_THREAD, "break the thread in two") \
  _fmt(OP_MAIN_CHANGE_FOLDER, "open a different folder") \
  _fmt(OP_MAIN_CHANGE_FOLDER_READONLY, "open a different folder in read only mode") \
  _fmt(OP_MAIN_CHANGE_GROUP, "open a different newsgroup") \
  _fmt(OP_MAIN_CHANGE_GROUP_READONLY, "open a different newsgroup in read only mode") \
  _fmt(OP_MAIN_CLEAR_FLAG, "clear a status flag from a message") \
  _fmt(OP_MAIN_DELETE_PATTERN, "delete messages matching a pattern") \
  _fmt(OP_MAIN_IMAP_FETCH, "force retrieval of mail from IMAP server") \
  _fmt(OP_MAIN_IMAP_LOGOUT_ALL, "logout from all IMAP servers") \
  _fmt(OP_MAIN_FETCH_MAIL, "retrieve mail from POP server") \
  _fmt(OP_MAIN_LIMIT, "show only messages matching a pattern") \
  _fmt(OP_MAIN_LINK_THREADS, "link tagged message to the current one") \
  _fmt(OP_MAIN_NEXT_UNREAD_MAILBOX, "open next mailbox with new mail") \
  _fmt(OP_MAIN_NEXT_NEW, "jump to the next new message") \
  _fmt(OP_MAIN_NEXT_NEW_THEN_UNREAD, "jump to the next new or unread message") \
  _fmt(OP_MAIN_NEXT_SUBTHREAD, "jump to the next subthread") \
  _fmt(OP_MAIN_NEXT_THREAD, "jump to the next thread") \
  _fmt(OP_MAIN_NEXT_UNDELETED, "move to the next undeleted message") \
  _fmt(OP_MAIN_NEXT_UNREAD, "jump to the next unread message") \
  _fmt(OP_MAIN_PARENT_MESSAGE, "jump to parent message in thread") \
  _fmt(OP_MAIN_PREV_THREAD, "jump to previous thread") \
  _fmt(OP_MAIN_PREV_SUBTHREAD, "jump to previous subthread") \
  _fmt(OP_MAIN_PREV_UNDELETED, "move to the previous undeleted message") \
  _fmt(OP_MAIN_PREV_NEW, "jump to the previous new message") \
  _fmt(OP_MAIN_PREV_NEW_THEN_UNREAD, "jump to the previous new or unread message") \
  _fmt(OP_MAIN_PREV_UNREAD, "jump to the previous unread message") \
  _fmt(OP_MAIN_READ_THREAD, "mark the current thread as read") \
  _fmt(OP_MAIN_READ_SUBTHREAD, "mark the current subthread as read") \
  _fmt(OP_MAIN_ROOT_MESSAGE, "jump to root message in thread") \
  _fmt(OP_MAIN_SET_FLAG, "set a status flag on a message") \
  _fmt(OP_MAIN_SYNC_FOLDER, "save changes to mailbox") \
  _fmt(OP_MAIN_TAG_PATTERN, "tag messages matching a pattern") \
  _fmt(OP_MAIN_QUASI_DELETE, "delete from mutt, don't touch on disk") \
  _fmt(OP_MAIN_UNDELETE_PATTERN, "undelete messages matching a pattern") \
  _fmt(OP_MAIN_UNTAG_PATTERN, "untag messages matching a pattern") \
  _fmt(OP_MARK_MSG, "create a hotkey macro for the current message") \
  _fmt(OP_MIDDLE_PAGE, "move to the middle of the page") \
  _fmt(OP_NEXT_ENTRY, "move to the next entry") \
  _fmt(OP_NEXT_LINE, "scroll down one line") \
  _fmt(OP_NEXT_PAGE, "move to the next page") \
  _fmt(OP_PAGER_BOTTOM, "jump to the bottom of the message") \
  _fmt(OP_PAGER_HIDE_QUOTED, "toggle display of quoted text") \
  _fmt(OP_PAGER_SKIP_QUOTED, "skip beyond quoted text") \
  _fmt(OP_PAGER_TOP, "jump to the top of the message") \
  _fmt(OP_PIPE, "pipe message/attachment to a shell command") \
  _fmt(OP_POST, "post message to newsgroup") \
  _fmt(OP_PREV_ENTRY, "move to the previous entry") \
  _fmt(OP_PREV_LINE, "scroll up one line") \
  _fmt(OP_PREV_PAGE, "move to the previous page") \
  _fmt(OP_PRINT, "print the current entry") \
  _fmt(OP_PURGE_MESSAGE, "really delete the current entry, bypassing the trash folder") \
  _fmt(OP_PURGE_THREAD, "really delete the current thread, bypassing the trash folder") \
  _fmt(OP_QUERY, "query external program for addresses") \
  _fmt(OP_QUERY_APPEND, "append new query results to current results") \
  _fmt(OP_QUIT, "save changes to mailbox and quit") \
  _fmt(OP_RECALL_MESSAGE, "recall a postponed message") \
  _fmt(OP_RECONSTRUCT_THREAD, "reconstruct thread containing current message") \
  _fmt(OP_REDRAW, "clear and redraw the screen") \
  _fmt(OP_REFORMAT_WINCH, "{internal}") \
  _fmt(OP_RENAME_MAILBOX, "rename the current mailbox (IMAP only)") \
  _fmt(OP_REPLY, "reply to a message") \
  _fmt(OP_RESEND, "use the current message as a template for a new one") \
  _fmt(OP_SAVE, "save message/attachment to a mailbox/file") \
  _fmt(OP_SEARCH, "search for a regular expression") \
  _fmt(OP_SEARCH_REVERSE, "search backwards for a regular expression") \
  _fmt(OP_SEARCH_NEXT, "search for next match") \
  _fmt(OP_SEARCH_OPPOSITE, "search for next match in opposite direction") \
  _fmt(OP_SEARCH_TOGGLE, "toggle search pattern coloring") \
  _fmt(OP_SHELL_ESCAPE, "invoke a command in a subshell") \
  _fmt(OP_SORT, "sort messages") \
  _fmt(OP_SORT_REVERSE, "sort messages in reverse order") \
  _fmt(OP_SUBSCRIBE_PATTERN, "subscribe to newsgroups matching a pattern") \
  _fmt(OP_TAG, "tag the current entry") \
  _fmt(OP_TAG_PREFIX, "apply next function to tagged messages") \
  _fmt(OP_TAG_PREFIX_COND, "apply next function ONLY to tagged messages") \
  _fmt(OP_TAG_SUBTHREAD, "tag the current subthread") \
  _fmt(OP_TAG_THREAD, "tag the current thread") \
  _fmt(OP_TOGGLE_NEW, "toggle a message's 'new' flag") \
  _fmt(OP_TOGGLE_READ, "toggle view of read messages") \
  _fmt(OP_TOGGLE_WRITE, "toggle whether the mailbox will be rewritten") \
  _fmt(OP_TOGGLE_MAILBOXES, "toggle whether to browse mailboxes or all files") \
  _fmt(OP_TOP_PAGE, "move to the top of the page") \
  _fmt(OP_UNCATCHUP, "mark all articles in newsgroup as unread") \
  _fmt(OP_UNDELETE, "undelete the current entry") \
  _fmt(OP_UNDELETE_THREAD, "undelete all messages in thread") \
  _fmt(OP_UNDELETE_SUBTHREAD, "undelete all messages in subthread") \
  _fmt(OP_UNSUBSCRIBE_PATTERN, "unsubscribe from newsgroups matching a pattern") \
  _fmt(OP_VERSION, "show the Mutt version number and date") \
  _fmt(OP_VIEW_ATTACH, "view attachment using mailcap entry if necessary") \
  _fmt(OP_VIEW_ATTACHMENTS, "show MIME attachments") \
  _fmt(OP_WHAT_KEY, "display the keycode for a key press") \
  _fmt(OP_LIMIT_CURRENT_THREAD, "limit view to current thread") \
  _fmt(OP_MAIN_SHOW_LIMIT, "show currently active limit pattern") \
  _fmt(OP_MAIN_COLLAPSE_THREAD, "collapse/uncollapse current thread") \
  _fmt(OP_MAIN_COLLAPSE_ALL, "collapse/uncollapse all threads") \

#define OPS_CRYPT(_fmt) \
  _fmt(OP_DECRYPT_SAVE,       "make decrypted copy and delete") \
  _fmt(OP_DECRYPT_COPY,       "make decrypted copy") \
  _fmt(OP_FORGET_PASSPHRASE,  "wipe passphrase(s) from memory") \
  _fmt(OP_EXTRACT_KEYS,       "extract supported public keys") \
  
#ifdef MIXMASTER
#define OPS_MIX(_fmt) \
  _fmt(OP_MIX_USE,        "accept the chain constructed") \
  _fmt(OP_MIX_APPEND,     "append a remailer to the chain") \
  _fmt(OP_MIX_INSERT,     "insert a remailer into the chain") \
  _fmt(OP_MIX_DELETE,     "delete a remailer from the chain") \
  _fmt(OP_MIX_CHAIN_PREV, "select the previous element of the chain") \
  _fmt(OP_MIX_CHAIN_NEXT, "select the next element of the chain") \
  _fmt(OP_COMPOSE_MIX,    "send the message through a mixmaster remailer chain")
#else
#define OPS_MIX(_)
#endif

#ifdef USE_NOTMUCH
#define OPS_NOTMUCH(_fmt) \
  _fmt(OP_MAIN_CHANGE_VFOLDER,            "open a different virtual folder") \
  _fmt(OP_MAIN_VFOLDER_FROM_QUERY,        "generate virtual folder from query") \
  _fmt(OP_MAIN_WINDOWED_VFOLDER_FORWARD,  "shifts virtual folder time window forwards") \
  _fmt(OP_MAIN_WINDOWED_VFOLDER_BACKWARD, "shifts virtual folder time window backwards") \
  _fmt(OP_MAIN_MODIFY_LABELS,             "modify (notmuch) tags") \
  _fmt(OP_MAIN_MODIFY_LABELS_THEN_HIDE,   "modify labels and then hide message") \
  _fmt(OP_MAIN_ENTIRE_THREAD,             "read entire thread of the current message")
#else
#define OPS_NOTMUCH(_)
#endif

#define OPS_PGP(_fmt) \
  _fmt(OP_COMPOSE_ATTACH_KEY,   "attach a PGP public key") \
  _fmt(OP_COMPOSE_PGP_MENU,     "show PGP options") \
  _fmt(OP_MAIL_KEY,             "mail a PGP public key") \
  _fmt(OP_VERIFY_KEY,           "verify a PGP public key") \
  _fmt(OP_VIEW_ID,              "view the key's user id") \
  _fmt(OP_CHECK_TRADITIONAL,    "check for classic PGP") \

#define OPS_SIDEBAR(_fmt) \
  _fmt(OP_SIDEBAR_NEXT,           "move the highlight to next mailbox") \
  _fmt(OP_SIDEBAR_NEXT_NEW,       "move the highlight to next mailbox with new mail") \
  _fmt(OP_SIDEBAR_OPEN,           "open highlighted mailbox") \
  _fmt(OP_SIDEBAR_PAGE_DOWN,      "scroll the sidebar down 1 page") \
  _fmt(OP_SIDEBAR_PAGE_UP,        "scroll the sidebar up 1 page") \
  _fmt(OP_SIDEBAR_PREV,           "move the highlight to previous mailbox") \
  _fmt(OP_SIDEBAR_PREV_NEW,       "move the highlight to previous mailbox with new mail") \
  _fmt(OP_SIDEBAR_TOGGLE_VIRTUAL, "toggle between mailboxes and virtual mailboxes") \
  _fmt(OP_SIDEBAR_TOGGLE_VISIBLE, "make the sidebar (in)visible") \
  
#define OPS_SMIME(_fmt) \
  _fmt(OP_COMPOSE_SMIME_MENU,   "show S/MIME options") \


#define OPS(_fmt) \
  OPS_CORE(_fmt) \
  OPS_SIDEBAR(_fmt) \
  OPS_MIX(_fmt) \
  OPS_NOTMUCH(_fmt) \
  OPS_PGP(_fmt) \
  OPS_SMIME(_fmt) \
  OPS_CRYPT(_fmt) \

enum mutt_ops {
#define DEFINE_OPS(opcode, help_string) opcode,
  OPS(DEFINE_OPS)
  OP_MAX,
};

#ifdef HELP_C
const char *HelpStrings[] = {
#define DEFINE_HELP_MESSAGE(opcode, help_string) [opcode] = N_(help_string),
  OPS(DEFINE_HELP_MESSAGE)
  [OP_MAX] = NULL,
};
#endif

#endif /* _MUTT_OPCODES_H */
