(* Frama-C journal generated at 13:38 the 13/11/2020 *)

exception Unreachable
exception Exception of string

[@@@ warning "-26"]

(* Run the user commands *)
let run () =
  Dynamic.Parameter.Bool.set "-wp" true;
  Dynamic.Parameter.String.set ""
    "/home/sridhar/Desktop/frama-c/practice@framac/wesorted.c";
  File.init_from_cmdline ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Dynamic.Parameter.Bool.clear "-wp" ();
  Project.set_keep_current false;
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Project.clear
    ~selection:(State_selection.of_list
                  [ State.get "Report.print_once";
                    State.get "Report.print_csv_once";
                    State.get "Report.classify_once";
                    State.get "Property_status.Consolidated_status";
                    State.get "Consolidation graph" ])
    ();
  Dynamic.Parameter.String.set "-wp-cache" "update";
  Dynamic.Parameter.String.set "" "";
  Dynamic.Parameter.String.set ""
    "/home/sridhar/Desktop/frama-c/practice@framac/wesorted.c";
  File.init_from_cmdline ();
  Project.set_keep_current false;
  !Db.Value.compute ();
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  let __ = Callgraph.Cg.get () in
  ()

(* Main *)
let main () =
  Journal.keep_file ".frama-c/frama_c_journal.ml";
  try run ()
  with
  | Unreachable -> Kernel.fatal "Journal reaches an assumed dead code" 
  | Exception s -> Kernel.log "Journal re-raised the exception %S" s
  | exn ->
    Kernel.fatal
      "Journal raised an unexpected exception: %s"
      (Printexc.to_string exn)

(* Registering *)
let main : unit -> unit =
  Dynamic.register
    ~plugin:"Frama_c_journal.ml"
    "main"
    (Datatype.func Datatype.unit Datatype.unit)
    ~journalize:false
    main

(* Hooking *)
let () = Cmdline.run_after_loading_stage main; Cmdline.is_going_to_load ()
